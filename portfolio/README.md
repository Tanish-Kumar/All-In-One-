# Modern Portfolio Website

A modern, responsive portfolio website built with the MERN stack (MongoDB, Express.js, React.js, Node.js). Features a beautiful UI with smooth animations and a contact form.

## Features

- Modern and responsive design
- Smooth animations using Framer Motion
- Material-UI components with custom styling
- Contact form with email functionality
- Project showcase with filtering
- Skills section with progress bars
- Mobile-friendly navigation

## Tech Stack

### Frontend
- React.js with TypeScript
- Material-UI
- Framer Motion
- React Router
- Axios

### Backend
- Node.js
- Express.js
- MongoDB
- Nodemailer

## Prerequisites

- Node.js (v14 or higher)
- MongoDB
- npm or yarn

## Installation

1. Clone the repository:
```bash
git clone <your-repo-url>
cd portfolio
```

2. Install frontend dependencies:
```bash
cd client
npm install
```

3. Install backend dependencies:
```bash
cd ../server
npm install
```

4. Create a `.env` file in the server directory:
```env
MONGODB_URI=your_mongodb_uri
PORT=5000
EMAIL_USER=your_email
EMAIL_PASS=your_email_password
```

## Running the Application

1. Start the backend server:
```bash
cd server
npm run dev
```

2. Start the frontend development server:
```bash
cd client
npm run dev
```

3. Open your browser and navigate to `http://localhost:5173`

## Building for Production

1. Build the frontend:
```bash
cd client
npm run build
```

2. Start the production server:
```bash
cd ../server
npm start
```

## Customization

1. Update personal information in the components:
   - `Home.tsx`: Update name, title, and description
   - `About.tsx`: Update skills and experience
   - `Projects.tsx`: Add your projects
   - `Contact.tsx`: Update contact information

2. Customize the theme:
   - Modify the theme object in `App.tsx`
   - Update colors, typography, and other Material-UI theme properties

3. Add your own images:
   - Replace placeholder images in the `public` directory
   - Update image paths in the components

## Contributing

1. Fork the repository
2. Create your feature branch (`git checkout -b feature/AmazingFeature`)
3. Commit your changes (`git commit -m 'Add some AmazingFeature'`)
4. Push to the branch (`git push origin feature/AmazingFeature`)
5. Open a Pull Request

## License

This project is licensed under the MIT License - see the LICENSE file for details. 