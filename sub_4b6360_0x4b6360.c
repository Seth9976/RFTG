// 函数名称: sub_4b6360
// 虚拟地址: 0x4b6360
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void*sub_4b6360()
{
    // 第一条实际指令: void* entry_ebx
    void* entry_ebx
    int32_t i = *(entry_ebx + 0x1f0)
    void* esi = nullptr
    
    while (true)
        void* edx_1 = data_27e7a44
        void* eax_1
        
        do
            if (esi != 0)
                eax_1 = esi + 0x1c4
            else
                eax_1 = *(edx_1 + 0x1c)
            
            int32_t ecx_3 = *(edx_1 + 0x20) * 0x1c4 + *(edx_1 + 0x1c)
            
            if (eax_1 u>= ecx_3)
            label_4b63a8:
                sub_4b9f90(entry_ebx + 0x18)
                void* result = data_27e7a44
                int32_t ecx_4 = *(result + 0xc)
                *(result + 0xc) = zx.d(*(entry_ebx + 0x1f0))
                *(entry_ebx + 0x1f0) = ecx_4
                *(result + 0x10) -= 1
                return result
            
            while ((*(eax_1 + 0x1c0) & 0xffff0000) == 0)
                eax_1 += 0x1c4
                
                if (eax_1 u>= ecx_3)
                    goto label_4b63a8
            
            esi = eax_1
        while (*(eax_1 + 0x1b4) != i)
        
        sub_4b8dc0(eax_1)
}
