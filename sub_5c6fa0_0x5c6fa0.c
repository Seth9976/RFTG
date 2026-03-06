// 函数名称: sub_5c6fa0
// 虚拟地址: 0x5c6fa0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void*sub_5c6fa0(void* arg1, char* arg2)
{
    // 第一条实际指令: char* ebx = arg2
    char* ebx = arg2
    int32_t var_24 = 0x10
    int32_t var_28 = 0
    void* var_2c = arg1
    void* edi_1 = sub_5cd1b0(ebx) & 0xfffffffe
    sub_5cd100()
    void* var_10 = arg1
    char* esi_1 = nullptr
    
    if (edi_1 u> 0)
        int32_t i = 0
        
        while (i s< 0x10)
            void* eax_1
            eax_1.b = *(esi_1 + ebx)
            i += 1
            char* eax_4 = var_10
            *eax_4 = sub_5c6f70(eax_1.b) << 4 | sub_5c6f70(*(esi_1 + ebx + 1))
            esi_1 = &esi_1[2]
            var_10 = &eax_4[1]
            
            if (esi_1 u>= edi_1)
                break
            
            ebx = arg2
    
    return arg1
}
