echo "Fetching..."
git fetch
echo "Switching branch..."
git checkout main
echo "Appending..."
echo Test >> test.txt
echo "Adding..."
git add test.txt
echo "Committing..."
git commit -m "Append to test.txt"
echo "Pushing..."
git push
echo "Done!"