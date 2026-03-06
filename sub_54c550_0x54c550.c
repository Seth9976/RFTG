// 函数名称: sub_54c550
// 虚拟地址: 0x54c550
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_54c550()
{
    // 第一条实际指令: int32_t i = sub_54c5f0(0)
    int32_t i = sub_54c5f0(0)
    
    while (i != 0)
        int32_t esi_1 = data_be1f14
        int32_t edi_1 = data_be1f10
        int32_t eax = i & 0xffff
        int32_t eax_1 = eax + 1
        int32_t ecx_2 = eax * 0xf88
        
        if (eax_1 u>= esi_1)
        label_54c5a7:
            i = 0
        else
            void* edx_3 = eax_1 * 0xf88 + edi_1
            
            while ((*(edx_3 + 0xf84) & 0xffff0000) == 0)
                eax_1 += 1
                edx_3 += 0xf88
                
                if (eax_1 u>= esi_1)
                    goto label_54c5a7
            
            i = *(edx_3 + 0xf84)
        
        int32_t edx_4 = data_be1f1c
        data_be1f1c = zx.d(*(ecx_2 + edi_1 + 0xf84))
        *(ecx_2 + edi_1 + 0xf84) = edx_4
        data_be1f20 -= 1
    
    data_be1f1c = 0
    data_be1f14 = 0
    return i
}
