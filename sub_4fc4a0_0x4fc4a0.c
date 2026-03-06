// 函数名称: sub_4fc4a0
// 虚拟地址: 0x4fc4a0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_4fc4a0(int32_t* arg1 @ esi)
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    int32_t var_8 = ecx
    int32_t result = 0
    int32_t i_1
    
    if (arg1[1] u<= 0)
    label_4fc4cc:
        i_1 = 0
    else
        void* ecx_1 = *arg1
        
        while ((*(ecx_1 + 0x1bc) & 0xffff0000) == 0)
            result += 1
            ecx_1 += 0x1c0
            
            if (result u>= arg1[1])
                goto label_4fc4cc
        
        i_1 = *(ecx_1 + 0x1bc)
    
    if (i_1 == 0)
        arg1[1] = 0
        arg1[3] = 0
        return result
    
    int32_t i = i_1
    
    do
        int32_t edx_1 = *arg1
        int32_t ebx_1 = i & 0xffff
        int32_t eax = ebx_1 + 1
        void* edi_3 = ebx_1 * 0x1c0 + edx_1
        int32_t i_2
        
        if (eax u>= arg1[1])
        label_4fc51c:
            i_2 = 0
        else
            void* ecx_4 = eax * 0x1c0 + edx_1
            
            while ((*(ecx_4 + 0x1bc) & 0xffff0000) == 0)
                eax += 1
                ecx_4 += 0x1c0
                
                if (eax u>= arg1[1])
                    goto label_4fc51c
            
            i_2 = *(ecx_4 + 0x1bc)
        
        int32_t i_3 = i_2
        i = i_2
        sub_4f6620(edi_3)
        int32_t eax_1 = arg1[3]
        arg1[3] = zx.d(*(edi_3 + 0x1bc))
        *(edi_3 + 0x1bc) = eax_1
        arg1[4] -= 1
    while (i != 0)
    
    arg1[1] = 0
    arg1[3] = 0
    return 0
}
