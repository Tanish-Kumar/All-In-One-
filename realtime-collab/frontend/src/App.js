import React, { useState, useEffect } from "react";
import io from "socket.io-client";

const socket = io("http://localhost:5000");

function App() {
  const [message, setMessage] = useState("");
  const [chat, setChat] = useState([]);

  useEffect(() => {
    socket.on("receiveMessage", (data) => {
      setChat((prev) => [...prev, data]);
    });
  }, []);

  const sendMessage = () => {
    socket.emit("sendMessage", message);
    setMessage("");
  };

  return (
    <div className="p-5">
      <h1 className="text-xl font-bold mb-2">Real-Time Collaboration</h1>
      <div className="border p-3 mb-3">
        {chat.map((msg, index) => (
          <p key={index}>{msg}</p>
        ))}
      </div>
      <input
        className="border p-1"
        value={message}
        onChange={(e) => setMessage(e.target.value)}
      />
      <button className="ml-2 bg-blue-500 text-white p-1" onClick={sendMessage}>
        Send
      </button>
    </div>
  );
}

export default App;
