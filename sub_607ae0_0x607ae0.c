// 函数名称: sub_607ae0
// 虚拟地址: 0x607ae0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_607ae0(void* arg1, int32_t* arg2, void* arg3, int32_t arg4)
{
    // 第一条实际指令: char* ebx = *(arg1 + 0x44)
    char* ebx = *(arg1 + 0x44)
    
    if ((*ebx & 2) != 0)
        sub_5d6350(ebx)
    
    int32_t* edi = arg2
    arg1 = arg3
    uint32_t ecx_1 = zx.d(*(*(ebx + 4) + 9))
    int32_t esi_3 = edi[1] * *(ebx + 0x10) + *edi * ecx_1 + *(ebx + 0x14)
    int32_t* eax_4 = edi[2] * ecx_1
    arg2 = eax_4
    arg3 = nullptr
    
    if (edi[3] s> 0)
        while (true)
            int32_t* var_14_1 = eax_4
            void* var_18_1 = arg1
            int32_t var_1c_1 = esi_3
            sub_5cd110()
            arg1 += arg4
            esi_3 += *(ebx + 0x10)
            void* eax_6 = arg3 + 1
            arg3 = eax_6
            
            if (eax_6 s>= edi[3])
                break
            
            eax_4 = arg2
    
    if ((*ebx & 2) != 0)
        sub_5d6380(ebx)
    
    return 0
}
