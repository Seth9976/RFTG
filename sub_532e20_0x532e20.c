// 函数名称: sub_532e20
// 虚拟地址: 0x532e20
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void __convention("regparm")sub_532e20(int32_t* arg1)
{
    // 第一条实际指令: int32_t ecx = 0
    int32_t ecx = 0
    int32_t i
    
    if (arg1[1] u<= 0)
    label_532e42:
        i = 0
    else
        void* edx_1 = *arg1
        
        while ((*(edx_1 + 0x30) & 0xffff0000) == 0)
            ecx += 1
            edx_1 += 0x34
            
            if (ecx u>= arg1[1])
                goto label_532e42
        
        i = *(edx_1 + 0x30)
    
    if (i == 0)
        arg1[1] = 0
        arg1[3] = 0
        return 
    
    do
        int32_t edi_1 = *arg1
        int32_t edx_2 = i & 0xffff
        int32_t edx_3 = edx_2 + 1
        void* ecx_3 = edx_2 * 0x34 + edi_1
        
        if (edx_3 u>= arg1[1])
        label_532e82:
            i = 0
        else
            void* esi_3 = edx_3 * 0x34 + edi_1
            
            while ((*(esi_3 + 0x30) & 0xffff0000) == 0)
                edx_3 += 1
                esi_3 += 0x34
                
                if (edx_3 u>= arg1[1])
                    goto label_532e82
            
            i = *(esi_3 + 0x30)
        
        int32_t esi_4 = arg1[3]
        arg1[3] = zx.d(*(ecx_3 + 0x30))
        *(ecx_3 + 0x30) = esi_4
        arg1[4] -= 1
    while (i != 0)
    
    arg1[1] = 0
    arg1[3] = 0
}
