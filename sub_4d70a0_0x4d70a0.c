// 函数名称: sub_4d70a0
// 虚拟地址: 0x4d70a0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void __convention("regparm")sub_4d70a0(int32_t* arg1)
{
    // 第一条实际指令: int32_t ecx = 0
    int32_t ecx = 0
    int32_t i
    
    if (arg1[1] u<= 0)
    label_4d70c2:
        i = 0
    else
        void* edx_1 = *arg1
        
        while ((*(edx_1 + 0x5c) & 0xffff0000) == 0)
            ecx += 1
            edx_1 += 0x60
            
            if (ecx u>= arg1[1])
                goto label_4d70c2
        
        i = *(edx_1 + 0x5c)
    
    if (i == 0)
        arg1[1] = 0
        arg1[3] = 0
        return 
    
    do
        int32_t edi_1 = *arg1
        int32_t ecx_1 = i & 0xffff
        int32_t ecx_2 = ecx_1 + 1
        void* edx_4 = ecx_1 * 0x60 + edi_1
        
        if (ecx_2 u>= arg1[1])
        label_4d7102:
            i = 0
        else
            void* esi_3 = ecx_2 * 0x60 + edi_1
            
            while ((*(esi_3 + 0x5c) & 0xffff0000) == 0)
                ecx_2 += 1
                esi_3 += 0x60
                
                if (ecx_2 u>= arg1[1])
                    goto label_4d7102
            
            i = *(esi_3 + 0x5c)
        
        int32_t esi_4 = arg1[3]
        arg1[3] = zx.d(*(edx_4 + 0x5c))
        *(edx_4 + 0x5c) = esi_4
        arg1[4] -= 1
    while (i != 0)
    
    arg1[1] = i
    arg1[3] = i
}
