import { Box, Container, Typography, Grid, Card, CardContent, CardMedia, CardActions, Button, Chip } from '@mui/material';
import { motion } from 'framer-motion';
import { useTheme } from '@mui/material/styles';
import GitHubIcon from '@mui/icons-material/GitHub';
import LaunchIcon from '@mui/icons-material/Launch';

const Projects = () => {
  const theme = useTheme();

  const projects = [
    {
      title: 'E-Commerce Platform',
      description: 'A full-stack e-commerce platform built with React, Node.js, and MongoDB. Features include user authentication, product management, shopping cart, and payment integration.',
      image: 'https://source.unsplash.com/random/800x600?ecommerce',
      technologies: ['React', 'Node.js', 'MongoDB', 'Express'],
      github: 'https://github.com/yourusername/ecommerce',
      demo: 'https://demo-ecommerce.com',
    },
    {
      title: 'Task Management App',
      description: 'A collaborative task management application with real-time updates, drag-and-drop functionality, and team collaboration features.',
      image: 'https://source.unsplash.com/random/800x600?task',
      technologies: ['React', 'Firebase', 'Material-UI', 'Redux'],
      github: 'https://github.com/yourusername/task-manager',
      demo: 'https://demo-taskmanager.com',
    },
    {
      title: 'Portfolio Website',
      description: 'A modern, responsive portfolio website built with React and Material-UI. Features smooth animations and a clean, professional design.',
      image: 'https://source.unsplash.com/random/800x600?portfolio',
      technologies: ['React', 'Material-UI', 'Framer Motion'],
      github: 'https://github.com/yourusername/portfolio',
      demo: 'https://your-portfolio.com',
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
            My Projects
          </Typography>

          <Grid container spacing={4}>
            {projects.map((project, index) => (
              <Grid item xs={12} md={6} lg={4} key={project.title}>
                <motion.div
                  initial={{ opacity: 0, y: 20 }}
                  animate={{ opacity: 1, y: 0 }}
                  transition={{ duration: 0.5, delay: index * 0.2 }}
                >
                  <Card
                    sx={{
                      height: '100%',
                      display: 'flex',
                      flexDirection: 'column',
                      background: 'rgba(17, 34, 64, 0.7)',
                      backdropFilter: 'blur(10px)',
                      border: `1px solid ${theme.palette.primary.main}`,
                      '&:hover': {
                        transform: 'translateY(-8px)',
                        transition: 'transform 0.3s ease-in-out',
                      },
                    }}
                  >
                    <CardMedia
                      component="img"
                      height="200"
                      image={project.image}
                      alt={project.title}
                      sx={{
                        objectFit: 'cover',
                        borderBottom: `1px solid ${theme.palette.primary.main}`,
                      }}
                    />
                    <CardContent sx={{ flexGrow: 1 }}>
                      <Typography
                        gutterBottom
                        variant="h5"
                        component="h2"
                        sx={{ color: theme.palette.primary.main }}
                      >
                        {project.title}
                      </Typography>
                      <Typography
                        variant="body2"
                        sx={{ mb: 2, color: theme.palette.text.secondary }}
                      >
                        {project.description}
                      </Typography>
                      <Box sx={{ display: 'flex', flexWrap: 'wrap', gap: 1 }}>
                        {project.technologies.map((tech) => (
                          <Chip
                            key={tech}
                            label={tech}
                            size="small"
                            sx={{
                              background: 'rgba(0, 255, 159, 0.1)',
                              color: theme.palette.primary.main,
                              border: `1px solid ${theme.palette.primary.main}`,
                            }}
                          />
                        ))}
                      </Box>
                    </CardContent>
                    <CardActions sx={{ p: 2 }}>
                      <Button
                        size="small"
                        startIcon={<GitHubIcon />}
                        href={project.github}
                        target="_blank"
                        sx={{
                          color: theme.palette.primary.main,
                          '&:hover': {
                            color: theme.palette.secondary.main,
                          },
                        }}
                      >
                        Code
                      </Button>
                      <Button
                        size="small"
                        startIcon={<LaunchIcon />}
                        href={project.demo}
                        target="_blank"
                        sx={{
                          color: theme.palette.primary.main,
                          '&:hover': {
                            color: theme.palette.secondary.main,
                          },
                        }}
                      >
                        Live Demo
                      </Button>
                    </CardActions>
                  </Card>
                </motion.div>
              </Grid>
            ))}
          </Grid>
        </motion.div>
      </Container>
    </Box>
  );
};

export default Projects; 