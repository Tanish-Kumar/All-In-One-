import { Box, Container, Typography, Grid, Paper, LinearProgress } from '@mui/material';
import { motion } from 'framer-motion';
import { useTheme } from '@mui/material/styles';
import CodeIcon from '@mui/icons-material/Code';
import StorageIcon from '@mui/icons-material/Storage';
import BrushIcon from '@mui/icons-material/Brush';
import BuildIcon from '@mui/icons-material/Build';

const About = () => {
  const theme = useTheme();

  const skills = [
    { name: 'Frontend Development', icon: <CodeIcon />, level: 90 },
    { name: 'Backend Development', icon: <StorageIcon />, level: 85 },
    { name: 'UI/UX Design', icon: <BrushIcon />, level: 80 },
    { name: 'DevOps & Tools', icon: <BuildIcon />, level: 75 },
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
            About Me
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
                <Typography variant="h4" sx={{ mb: 3, color: theme.palette.primary.main }}>
                  My Story
                </Typography>
                <Typography variant="body1" sx={{ mb: 2, color: theme.palette.text.secondary }}>
                  I am a passionate Full Stack Developer with a strong foundation in web development
                  and a keen eye for creating beautiful, user-friendly applications. With several
                  years of experience in the industry, I've worked on various projects ranging from
                  small business websites to complex enterprise applications.
                </Typography>
                <Typography variant="body1" sx={{ color: theme.palette.text.secondary }}>
                  My journey in technology started with a curiosity about how things work on the
                  internet. This curiosity led me to learn programming and eventually specialize in
                  full-stack development. I'm constantly learning and exploring new technologies to
                  stay at the forefront of web development.
                </Typography>
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
                <Typography variant="h4" sx={{ mb: 3, color: theme.palette.primary.main }}>
                  Skills
                </Typography>
                {skills.map((skill, index) => (
                  <Box key={skill.name} sx={{ mb: 3 }}>
                    <Box sx={{ display: 'flex', alignItems: 'center', mb: 1 }}>
                      {skill.icon}
                      <Typography
                        variant="subtitle1"
                        sx={{ ml: 1, color: theme.palette.text.secondary }}
                      >
                        {skill.name}
                      </Typography>
                    </Box>
                    <LinearProgress
                      variant="determinate"
                      value={skill.level}
                      sx={{
                        height: 8,
                        borderRadius: 4,
                        backgroundColor: 'rgba(255, 255, 255, 0.1)',
                        '& .MuiLinearProgress-bar': {
                          background: `linear-gradient(45deg, ${theme.palette.primary.main}, ${theme.palette.secondary.main})`,
                        },
                      }}
                    />
                  </Box>
                ))}
              </Paper>
            </Grid>
          </Grid>
        </motion.div>
      </Container>
    </Box>
  );
};

export default About; 