set -e

echo "Fetching..."
git fetch
echo "Switching branch..."
git checkout main-alot
echo "Appending..."
echo $(date) >> test.txt
echo "Adding..."
git add test.txt
echo "Sleeping..."
sleep 5
echo "Committing..."
git commit -m "Trying out a commit"
echo "Pushing..."
git push
echo "Done!"
