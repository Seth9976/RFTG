// 函数名称: sub_4c8d10
// 虚拟地址: 0x4c8d10
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

voidsub_4c8d10()
{
    // 第一条实际指令: if (data_27e7bb8 == 0)
    if (data_27e7bb8 == 0)
        return 
    
    void* edi_1 = nullptr
    
    while (true)
        int32_t* ecx_1 = data_27e7bb8
        void* esi_1
        
        if (edi_1 != 0)
            esi_1 = edi_1 + 0x4c
        else
            esi_1 = *ecx_1
        
        int32_t eax = ecx_1[1] * 0x4c + *ecx_1
        
        if (esi_1 u>= eax)
            break
        
        while ((*(esi_1 + 0x48) & 0xffff0000) == 0)
            esi_1 += 0x4c
            
            if (esi_1 u>= eax)
                return 
        
        edi_1 = esi_1
        
        if (*(esi_1 + 0x24) == 4)
            int32_t eax_3 = *(esi_1 + 0x14)
            
            if (eax_3 != 1 && eax_3 != 2 && eax_3 != 3)
                if (eax_3 == 4)
                    sub_4c8890(esi_1)
                    continue
                else if (eax_3 != 0)
                    continue
                else
                    sub_4c87f0(esi_1)
                    continue
            
            sub_4c8670()
}
