import javax.swing.*;
import java.awt.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

public class demogui {
    public static void main(String[] args) {
        // Create the main frame
        JFrame frame = new JFrame("Library Management System");
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        frame.setSize(800, 600);
        frame.setLayout(new BorderLayout());

        // Left menu panel
        JPanel menuPanel = new JPanel();
        menuPanel.setLayout(new BoxLayout(menuPanel, BoxLayout.Y_AXIS));
        menuPanel.setBackground(Color.LIGHT_GRAY);
        JScrollPane menuScrollPane = new JScrollPane(menuPanel);

        // Right content panel
        JPanel contentPanel = new JPanel();
        contentPanel.setLayout(new BorderLayout());
        JLabel defaultContent = new JLabel("Select a function from the left menu", SwingConstants.CENTER);
        contentPanel.add(defaultContent, BorderLayout.CENTER);

        // Menu items
        addMenuSection(menuPanel, contentPanel, "Reader", 
            new String[]{"Show All Readers", "Add New Reader", "Delete Reader"}, 
            new String[]{"Displaying all readers...", "Adding a new reader...", "Deleting a reader..."});

        addMenuSection(menuPanel, contentPanel, "Book", 
            new String[]{"Show All Books", "Add Book", "Delete Book"}, 
            new String[]{"Displaying all books...", "Adding a book...", "Deleting a book..."});

        addMenuSection(menuPanel, contentPanel, "Loan", 
            new String[]{"Show All Loans", "Add Loan", "Return a Loan"}, 
            new String[]{"Displaying all loans...", "Adding a loan...", "Returning a loan..."});

        // Add panels to the frame
        frame.add(menuScrollPane, BorderLayout.WEST);
        frame.add(contentPanel, BorderLayout.CENTER);

        // Display the frame
        frame.setVisible(true);
    }

    /**
     * Adds a collapsible section with buttons to the menu panel.
     */
    private static void addMenuSection(JPanel menuPanel, JPanel contentPanel, String sectionName, String[] buttonLabels, String[] messages) {
        // Toggle button for the section
        JButton sectionButton = new JButton(sectionName);
        sectionButton.setAlignmentX(Component.LEFT_ALIGNMENT);

        // Panel to hold the section's buttons
        JPanel buttonPanel = new JPanel();
        buttonPanel.setLayout(new BoxLayout(buttonPanel, BoxLayout.Y_AXIS));
        buttonPanel.setVisible(false);

        // Add buttons to the button panel
        for (int i = 0; i < buttonLabels.length; i++) {
            String label = buttonLabels[i];
            String message = messages[i];
            JButton button = new JButton(label);
            button.setAlignmentX(Component.LEFT_ALIGNMENT);
            button.addActionListener(new ActionListener() {
                @Override
                public void actionPerformed(ActionEvent e) {
                    updateContent(contentPanel, message);
                }
            });
            buttonPanel.add(button);
        }

        // Add toggle functionality
        sectionButton.addActionListener(new ActionListener() {
            @Override
            public void actionPerformed(ActionEvent e) {
                buttonPanel.setVisible(!buttonPanel.isVisible());
                menuPanel.revalidate();
                menuPanel.repaint();
            }
        });

        // Add section button and button panel to the menu panel
        menuPanel.add(sectionButton);
        menuPanel.add(buttonPanel);
    }

    /**
     * Updates the content panel with a new message.
     */
    private static void updateContent(JPanel contentPanel, String message) {
        contentPanel.removeAll();
        JLabel contentLabel = new JLabel(message, SwingConstants.CENTER);
        contentPanel.add(contentLabel, BorderLayout.CENTER);
        contentPanel.revalidate();
        contentPanel.repaint();
    }
}