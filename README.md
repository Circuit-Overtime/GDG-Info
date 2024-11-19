### Hands-on Activity: COMMIT HUNT

To successfully complete the activity, attendees must perform the following steps:

1. **Clone the Repository**  
   - Fork the main repository to your GitHub account.  
   - Clone the forked repository to your local machine using:  
     ```bash
     git clone <your-forked-repo-url>
     ```

2. **Go to the proper branch**  
   - On the same branch that you have made during the session! 
     ```bash
     git checkout <full-roll-number>
     ```
     For eg 24CS20XXXXX

3. **Task 1 : Add a New File**  
   - Navigate to the project directory and add a specific file (e.g., `<your-email>.py`):  
     ```bash
     print("your-email-address")
     ```  
     - Replace `<your-email-address>` with your actual email.
     - Replace `<your-email>` with your email upto @.

4. **Task 2 : Add your name in main.cpp file**
   - Sync and pull from your branch.
   - Navigate to the *main.cpp* inside project directory 
   - Add you name in contributor_name array 
   - Note the decoded string after running the file.

     ```cpp
     string contributor_names[] = { "Manish", "Ayushman" };// add your name here 
     ```    
   - Use `https://www.programiz.com/cpp-programming/online-compiler/` to get the OUTPUT of the code!
  
6. **Stash apply and Commit Changes**
   - Stash apply:
   ```bash
   git stash apply
   ```  
   - Stage the new file:  
     ```bash
     git add <your-email>.py
     ```  
   - Commit the changes with a meaningful commit message:  
     ```bash
     git commit -m "Added file for email <your-email>"
     ```

7. **Push Changes to Your Branch**  
   - Push the branch to your forked repository:  
     ```bash
     git push origin <your-roll-number>
     ```

8. **Create a Pull Request**  
   - Go to the original repository on GitHub.  
   - Click **Compare & Pull Request** for your branch.  
   - Add a description summarizing your changes and submit the pull request.

9. **Wait for Review and Merge**  
   - The pull request will be reviewed by the instructor or team.  
   - Once approved, it will be merged into the main repository.  

---

### Completion Criteria
- The pull request should include the correctly named file `<your-email>.py`.
- The file must contain your name, roll number, and a short introduction.
- Add your name in contributor_names array at main.cpp.
- Run the main.cpp & note down the secret message. 
- The branch name must match your roll number.
- The pull request must not have merge conflicts with the main branch.
- Upload the noted secret message at this form https://forms.gle/vZUjYQtQkCQYieu78 for your attendance.
