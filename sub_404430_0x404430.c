// 函数名称: sub_404430
// 虚拟地址: 0x404430
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_404430(int32_t arg1)
{
    // 第一条实际指令: void* esi = data_27e7a40
    void* esi = data_27e7a40
    int32_t edi = *(esi + 0x2c4958)
    int32_t edx = 0
    
    if (edi s> 0)
        void* esi_1 = esi + 0xad8
        
        do
            if (*(esi_1 + 0x1d4) == arg1)
                int32_t i = 0
                void* ecx_2 = esi_1
                
                do
                    int32_t entry_ebx
                    
                    if (*ecx_2 == entry_ebx)
                        return edx * 0x1f8 + data_27e7a40 + i * 0x50 + 0xad8
                    
                    i += 1
                    ecx_2 += 0x50
                while (i s< 4)
            
            edx += 1
            esi_1 += 0x1f8
        while (edx s< edi)
    
    return 0
}
