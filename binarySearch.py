a=list(map(int,input().split()))
tar=3
i=0
j=len(a)
while(i<=j):
    mid=(i+j)//2
    if(a[mid]==tar):
        print(mid)
        break
    elif(a[mid]>tar):
        i=mid+1
    elif(a[mid]<tar):
        j=mid-1
        

