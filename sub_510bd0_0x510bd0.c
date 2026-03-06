// 函数名称: sub_510bd0
// 虚拟地址: 0x510bd0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_510bd0()
{
    // 第一条实际指令: int32_t i = sub_510c70(0)
    int32_t i = sub_510c70(0)
    
    while (i != 0)
        int32_t esi_1 = data_be1e7c
        int32_t edi_1 = data_be1e78
        int32_t eax = i & 0xffff
        int32_t eax_1 = eax + 1
        int32_t ecx_2 = eax * 0x4d0
        
        if (eax_1 u>= esi_1)
        label_510c27:
            i = 0
        else
            void* edx_3 = eax_1 * 0x4d0 + edi_1
            
            while ((*(edx_3 + 0x4cc) & 0xffff0000) == 0)
                eax_1 += 1
                edx_3 += 0x4d0
                
                if (eax_1 u>= esi_1)
                    goto label_510c27
            
            i = *(edx_3 + 0x4cc)
        
        int32_t edx_4 = data_be1e84
        data_be1e84 = zx.d(*(ecx_2 + edi_1 + 0x4cc))
        *(ecx_2 + edi_1 + 0x4cc) = edx_4
        data_be1e88 -= 1
    
    data_be1e84 = 0
    data_be1e7c = 0
    return i
}
