// 函数名称: sub_401cc0
// 虚拟地址: 0x401cc0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void __convention("regparm")sub_401cc0(int32_t* arg1)
{
    // 第一条实际指令: int32_t ecx = 0
    int32_t ecx = 0
    int32_t i
    
    if (arg1[1] u<= 0)
    label_401cde:
        i = 0
    else
        void* edx_1 = *arg1
        
        while ((*(edx_1 + 0x44) & 0xffff0000) == 0)
            ecx += 1
            edx_1 += 0x48
            
            if (ecx u>= arg1[1])
                goto label_401cde
        
        i = *(edx_1 + 0x44)
    
    while (i != 0)
        int32_t edx_2 = *arg1
        int32_t ecx_1 = i & 0xffff
        int32_t ecx_2 = ecx_1 + 1
        void* esi_2 = edx_2 + ecx_1 * 0x48
        
        if (ecx_2 u>= arg1[1])
        label_401d12:
            i = 0
        else
            void* edx_3 = edx_2 + ecx_2 * 0x48
            
            while ((*(edx_3 + 0x44) & 0xffff0000) == 0)
                ecx_2 += 1
                edx_3 += 0x48
                
                if (ecx_2 u>= arg1[1])
                    goto label_401d12
            
            i = *(edx_3 + 0x44)
        
        int32_t edx_4 = arg1[3]
        arg1[3] = zx.d(*(esi_2 + 0x44))
        *(esi_2 + 0x44) = edx_4
        arg1[4] -= 1
    
    arg1[3] = 0
    arg1[1] = 0
}
