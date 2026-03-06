// 函数名称: sub_54b6c0
// 虚拟地址: 0x54b6c0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void __convention("regparm")sub_54b6c0(int32_t* arg1)
{
    // 第一条实际指令: int32_t ecx = 0
    int32_t ecx = 0
    int32_t i
    
    if (arg1[1] u<= 0)
    label_54b6e8:
        i = 0
    else
        void* edx_1 = *arg1
        
        while ((*(edx_1 + 0x148) & 0xffff0000) == 0)
            ecx += 1
            edx_1 += 0x14c
            
            if (ecx u>= arg1[1])
                goto label_54b6e8
        
        i = *(edx_1 + 0x148)
    
    if (i == 0)
        arg1[1] = 0
        arg1[3] = 0
        return 
    
    do
        int32_t edi_1 = *arg1
        int32_t edx_2 = i & 0xffff
        int32_t edx_3 = edx_2 + 1
        void* ecx_3 = edx_2 * 0x14c + edi_1
        
        if (edx_3 u>= arg1[1])
        label_54b72a:
            i = 0
        else
            void* esi_3 = edx_3 * 0x14c + edi_1
            
            while ((*(esi_3 + 0x148) & 0xffff0000) == 0)
                edx_3 += 1
                esi_3 += 0x14c
                
                if (edx_3 u>= arg1[1])
                    goto label_54b72a
            
            i = *(esi_3 + 0x148)
        
        int32_t esi_4 = arg1[3]
        arg1[3] = zx.d(*(ecx_3 + 0x148))
        *(ecx_3 + 0x148) = esi_4
        arg1[4] -= 1
    while (i != 0)
    
    arg1[1] = 0
    arg1[3] = 0
}
