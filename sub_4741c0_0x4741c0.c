// 函数名称: sub_4741c0
// 虚拟地址: 0x4741c0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void __stdcallsub_4741c0(int32_t* arg1 @ eax, int32_t* arg2)
{
    // 第一条实际指令: int32_t ecx = arg1[1]
    int32_t ecx = arg1[1]
    
    if (ecx s< arg1[2])
        int32_t* ecx_1 = *arg1 + (ecx << 2)
        
        if (ecx_1 != 0)
            *ecx_1 = *arg2
        
        arg1[1] += 1
        return 
    
    sub_4c5870("mSize < mSizeReserved", &data_83f3d3, "c:\ax2010\engine\xArray.h", 0x96, 
        "XArray<enum StatDifficulty>::Append")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_4c5a30()
    noreturn
}
