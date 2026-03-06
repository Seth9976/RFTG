// 函数名称: sub_4d2690
// 虚拟地址: 0x4d2690
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t* __stdcallsub_4d2690(int32_t* arg1 @ eax, int32_t* arg2)
{
    // 第一条实际指令: int32_t* ebx = arg2
    int32_t* ebx = arg2
    int32_t eax = ebx[1]
    
    if (eax s<= 0x7d2)
        if (eax s>= 0x7d1)
            int32_t* eax_11 = sub_518190(&arg1[0x143], &arg2)
            ebx[0x3fd].b = 0
            return eax_11
        
        if (eax - 0x3ea u<= 4)
            switch (eax)
                case 0x3ea
                    return sub_4d1190(arg1, ebx)
                case 0x3eb
                    return sub_4d12a0(arg1, ebx)
                case 0x3ec
                    return sub_4d12f0(arg1)
                case 0x3ed
                    if (*arg1 != 4)
                        return sub_4d1350(arg1)
                    
                    int32_t eax_8 = sub_4c5680("netsync client connect failed")
                    *arg1 = 1
                    return eax_8
                case 0x3ee
                    return sub_4d13a0(arg1, ebx)
    else if (eax == 0x7d3)
        if (*arg1 != 2)
            return sub_4d1a90(arg1)
        
        return sub_4d1780(arg1)
    
    sub_4c5870("Halt", &data_83f3d3, "NetSync.cpp", 0x390, "NetSync::NetSyncProcessMessage")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_4c5a30()
    noreturn
}
