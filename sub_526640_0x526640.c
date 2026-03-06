// 函数名称: sub_526640
// 虚拟地址: 0x526640
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void*sub_526640(int32_t* arg1, int32_t* arg2, int32_t arg3)
{
    // 第一条实际指令: int32_t esi = 0
    int32_t esi = 0
    int32_t entry_ebx
    
    if (entry_ebx s> 0)
        int32_t* edi_2 = arg1
        
        do
            if (edi_2[1] == arg3)
                char* eax_2 = *edi_2
                char* const ecx_1 = &data_83f3d3
                
                if (eax_2 != 0)
                    ecx_1 = eax_2
                
                if (sub_5a9697(ecx_1, sub_4c4410(arg2)) == 0)
                    return &arg1[esi * 5]
            
            esi += 1
            edi_2 = &edi_2[5]
        while (esi s< entry_ebx)
    
    return 0
}
