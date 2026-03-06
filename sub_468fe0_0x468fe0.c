// 函数名称: sub_468fe0
// 虚拟地址: 0x468fe0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_468fe0()
{
    // 第一条实际指令: int32_t* esi = nullptr
    int32_t* esi = nullptr
    
    while (true)
        void* ecx_1 = data_27e7a44
        int32_t* edi_1
        
        while (true)
            if (esi != 0)
                edi_1 = &esi[0x71]
            else
                edi_1 = *(ecx_1 + 0x1c)
            
            int32_t result = *(ecx_1 + 0x20) * 0x1c4 + *(ecx_1 + 0x1c)
            
            if (edi_1 u>= result)
                return result
            
            while ((edi_1[0x70] & 0xffff0000) == 0)
                edi_1 = &edi_1[0x71]
                
                if (edi_1 u>= result)
                    return result
            
            esi = edi_1
            void* entry_ebx
            
            if (edi_1 != entry_ebx)
                if (edi_1[1] == *(entry_ebx + 4))
                    break
        
        sub_468f50(edi_1)
}
