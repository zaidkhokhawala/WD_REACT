import React from 'react';
import { useTheme } from './ThemeContext'; // Ensure you are importing useTheme correctly

const ThemeToggleButton = () => {
  const { theme, toggleTheme } = useTheme();

  return (
    <button className="btn btn-outline-secondary" onClick={toggleTheme}>
      Toggle to {theme === 'light' ? 'Dark' : 'Light'} Mode
    </button>
  );
};

export default ThemeToggleButton; // Ensure this export
