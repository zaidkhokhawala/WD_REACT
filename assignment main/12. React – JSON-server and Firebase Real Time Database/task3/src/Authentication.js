import React, { useState } from 'react'; // Add missing useState import
import { useAuth } from './AuthContext'; // Add missing useAuth import

const Authentication = () => {
  const { isAuthenticated, user, login, logout } = useAuth();
  const [username, setUsername] = useState('');

  const handleLogin = () => {
    login(username);
  };

  return (
    <div className="mt-3">
      {isAuthenticated ? (
        <div>
          <h4>Welcome, {user}!</h4>
          <button className="btn btn-danger" onClick={logout}>
            Logout
          </button>
        </div>
      ) : (
        <div>
          <input
            type="text"
            className="form-control"
            placeholder="Enter username"
            value={username}
            onChange={(e) => setUsername(e.target.value)}
          />
          <button className="btn btn-success mt-2" onClick={handleLogin}>
            Login
          </button>
        </div>
      )}
    </div>
  );
};

export default Authentication; // Ensure this export
