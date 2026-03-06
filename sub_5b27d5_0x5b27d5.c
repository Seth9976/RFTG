// 函数名称: sub_5b27d5
// 虚拟地址: 0x5b27d5
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5b27d5(int32_t* arg1, int32_t arg2, char arg3, int32_t arg4)
{
    // 第一条实际指令: int32_t ebx
    int32_t ebx
    ebx.b = arg3
    char eax = arg1[2].b
    
    if (eax == 0x70 || ebx.b == 0x70)
        int32_t ecx_10
        ecx_10.b = eax == ebx.b
        return ecx_10
    
    int32_t edx_1
    
    if (eax == 0x73 || eax == 0x53)
        edx_1 = 1
    else
        edx_1 = 0
    
    int32_t ecx
    
    if (ebx.b == 0x73 || ebx.b == 0x53)
        ecx = 1
    else
        ecx = 0
    
    if (edx_1 != 0)
        if (edx_1 == ecx)
            int32_t ecx_6 = arg1[3] & 0x810
            int32_t ecx_7 = neg.d(ecx_6)
            int32_t edx_3 = arg4 & 0x810
            int32_t edx_4 = neg.d(edx_3)
            
            if (neg.d(sbb.d(ecx_7, ecx_7, ecx_6 != 0)) == neg.d(sbb.d(edx_4, edx_4, edx_3 != 0)))
                return 1
    else if (ecx == 0)
        int32_t eax_4
        int32_t ecx_1
        
        if (eax == 0x64)
            ecx_1 = 1
        else
            if (eax != 0x69 && eax != 0x6f && eax != 0x75 && eax != 0x78 && eax != 0x58 && ebx.b != 0x64
                    && ebx.b != 0x69 && ebx.b != 0x6f && ebx.b != 0x75 && ebx.b != 0x78
                    && ebx.b != 0x58)
                eax_4.b = *arg1 == arg2
                return eax_4
            
            if (eax == 0x64 || eax == 0x69 || eax == 0x6f || eax == 0x75 || eax == 0x78 || eax == 0x58)
                ecx_1 = 1
            else
                ecx_1 = 0
        
        int32_t eax_1
        
        if (ebx.b == 0x64 || ebx.b == 0x69 || ebx.b == 0x6f || ebx.b == 0x75 || ebx.b == 0x78
                || ebx.b == 0x58)
            eax_1 = 1
        else
            eax_1 = 0
        
        if (ecx_1 == eax_1)
            int32_t eax_2 = arg1[3]
            
            if (((eax_2 ^ arg4) & 0x10000) == 0 && ((eax_2.b ^ arg4.b) & 0x20) == 0)
                eax_4.b = *arg1 == arg2
                return eax_4
    
    return 0
}
