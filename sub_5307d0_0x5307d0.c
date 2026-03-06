// 函数名称: sub_5307d0
// 虚拟地址: 0x5307d0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5307d0()
{
    // 第一条实际指令: int32_t i = sub_530870(0)
    int32_t i = sub_530870(0)
    
    while (i != 0)
        int32_t ebx_1 = data_be1ed8
        int32_t edx_1 = data_be1edc
        int32_t edi = i & 0xffff
        int32_t eax_1 = edi + 1
        void* esi_3 = edi * 0x19e0 + ebx_1
        
        if (eax_1 u>= edx_1)
        label_530827:
            i = 0
        else
            void* ecx_3 = eax_1 * 0x19e0 + ebx_1
            
            while ((*(ecx_3 + 0x19dc) & 0xffff0000) == 0)
                eax_1 += 1
                ecx_3 += 0x19e0
                
                if (eax_1 u>= edx_1)
                    goto label_530827
            
            i = *(ecx_3 + 0x19dc)
        
        sub_530620(esi_3)
        int32_t eax_2 = data_be1ee4
        data_be1ee4 = zx.d(*(esi_3 + 0x19dc))
        *(esi_3 + 0x19dc) = eax_2
        data_be1ee8 -= 1
    
    data_be1ee4 = 0
    data_be1edc = 0
    return 0
}
