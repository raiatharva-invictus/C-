def rewrite(commit):
    old_emails = [b'braiatharva726@gmail.com', b'another_old_email@example.com']
    if commit.author_email in old_emails:
        commit.author_email = b'braiatharva24.in@gmail.com'
        commit.author_name = b'Atharva Rai'
    if commit.committer_email in old_emails:
        commit.committer_email = b'braiatharva24.in@gmail.com'
        commit.committer_name = b'Atharva Rai'

#  this was made to overwrite email in my github commits using git filter-repo 