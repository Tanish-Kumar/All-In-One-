import { useState } from 'react';
import {
  Box,
  Container,
  Typography,
  Grid,
  TextField,
  Button,
  Paper,
  Snackbar,
  Alert,
} from '@mui/material';
import { motion } from 'framer-motion';
import { useTheme } from '@mui/material/styles';
import EmailIcon from '@mui/icons-material/Email';
import PhoneIcon from '@mui/icons-material/Phone';
import LocationOnIcon from '@mui/icons-material/LocationOn';

const Contact = () => {
  const theme = useTheme();
  const [formData, setFormData] = useState({
    name: '',
    email: '',
    subject: '',
    message: '',
  });
  const [snackbar, setSnackbar] = useState({
    open: false,
    message: '',
    severity: 'success' as 'success' | 'error',
  });

  const handleChange = (e: React.ChangeEvent<HTMLInputElement | HTMLTextAreaElement>) => {
    setFormData({
      ...formData,
      [e.target.name]: e.target.value,
    });
  };

  const handleSubmit = async (e: React.FormEvent) => {
    e.preventDefault();
    // Here you would typically send the form data to your backend
    // For now, we'll just show a success message
    setSnackbar({
      open: true,
      message: 'Message sent successfully!',
      severity: 'success',
    });
    setFormData({ name: '', email: '', subject: '', message: '' });
  };

  const handleCloseSnackbar = () => {
    setSnackbar({ ...snackbar, open: false });
  };

  const contactInfo = [
    {
      icon: <EmailIcon />,
      title: 'Email',
      content: 'your.email@example.com',
      link: 'mailto:your.email@example.com',
    },
    {
      icon: <PhoneIcon />,
      title: 'Phone',
      content: '+1 (123) 456-7890',
      link: 'tel:+11234567890',
    },
    {
      icon: <LocationOnIcon />,
      title: 'Location',
      content: 'Your City, Country',
      link: 'https://maps.google.com',
    },
  ];

  return (
    <Box
      component="section"
      sx={{
        minHeight: '100vh',
        py: 8,
        background: 'linear-gradient(45deg, #0a192f 30%, #112240 90%)',
      }}
    >
      <Container>
        <motion.div
          initial={{ opacity: 0, y: 20 }}
          animate={{ opacity: 1, y: 0 }}
          transition={{ duration: 0.8 }}
        >
          <Typography
            variant="h2"
            sx={{
              mb: 6,
              textAlign: 'center',
              background: `linear-gradient(45deg, ${theme.palette.primary.main}, ${theme.palette.secondary.main})`,
              backgroundClip: 'text',
              WebkitBackgroundClip: 'text',
              color: 'transparent',
            }}
          >
            Get in Touch
          </Typography>

          <Grid container spacing={4}>
            <Grid item xs={12} md={6}>
              <Paper
                elevation={3}
                sx={{
                  p: 4,
                  height: '100%',
                  background: 'rgba(17, 34, 64, 0.7)',
                  backdropFilter: 'blur(10px)',
                  border: `1px solid ${theme.palette.primary.main}`,
                }}
              >
                <Typography variant="h4" sx={{ mb: 4, color: theme.palette.primary.main }}>
                  Contact Information
                </Typography>
                {contactInfo.map((info) => (
                  <Box
                    key={info.title}
                    sx={{
                      display: 'flex',
                      alignItems: 'center',
                      mb: 3,
                    }}
                  >
                    <Box
                      sx={{
                        mr: 2,
                        color: theme.palette.primary.main,
                      }}
                    >
                      {info.icon}
                    </Box>
                    <Box>
                      <Typography
                        variant="h6"
                        sx={{ color: theme.palette.text.primary }}
                      >
                        {info.title}
                      </Typography>
                      <Button
                        href={info.link}
                        target="_blank"
                        sx={{
                          color: theme.palette.text.secondary,
                          textTransform: 'none',
                          p: 0,
                          '&:hover': {
                            color: theme.palette.primary.main,
                          },
                        }}
                      >
                        {info.content}
                      </Button>
                    </Box>
                  </Box>
                ))}
              </Paper>
            </Grid>

            <Grid item xs={12} md={6}>
              <Paper
                elevation={3}
                sx={{
                  p: 4,
                  height: '100%',
                  background: 'rgba(17, 34, 64, 0.7)',
                  backdropFilter: 'blur(10px)',
                  border: `1px solid ${theme.palette.primary.main}`,
                }}
              >
                <Typography variant="h4" sx={{ mb: 4, color: theme.palette.primary.main }}>
                  Send a Message
                </Typography>
                <form onSubmit={handleSubmit}>
                  <TextField
                    fullWidth
                    label="Name"
                    name="name"
                    value={formData.name}
                    onChange={handleChange}
                    sx={{ mb: 2 }}
                    required
                  />
                  <TextField
                    fullWidth
                    label="Email"
                    name="email"
                    type="email"
                    value={formData.email}
                    onChange={handleChange}
                    sx={{ mb: 2 }}
                    required
                  />
                  <TextField
                    fullWidth
                    label="Subject"
                    name="subject"
                    value={formData.subject}
                    onChange={handleChange}
                    sx={{ mb: 2 }}
                    required
                  />
                  <TextField
                    fullWidth
                    label="Message"
                    name="message"
                    multiline
                    rows={4}
                    value={formData.message}
                    onChange={handleChange}
                    sx={{ mb: 3 }}
                    required
                  />
                  <Button
                    type="submit"
                    variant="contained"
                    fullWidth
                    size="large"
                    sx={{
                      background: `linear-gradient(45deg, ${theme.palette.primary.main}, ${theme.palette.secondary.main})`,
                      '&:hover': {
                        background: `linear-gradient(45deg, ${theme.palette.secondary.main}, ${theme.palette.primary.main})`,
                      },
                    }}
                  >
                    Send Message
                  </Button>
                </form>
              </Paper>
            </Grid>
          </Grid>
        </motion.div>
      </Container>
      <Snackbar
        open={snackbar.open}
        autoHideDuration={6000}
        onClose={handleCloseSnackbar}
      >
        <Alert
          onClose={handleCloseSnackbar}
          severity={snackbar.severity}
          sx={{ width: '100%' }}
        >
          {snackbar.message}
        </Alert>
      </Snackbar>
    </Box>
  );
};

export default Contact; 