// 函数名称: sub_5ab6d3
// 虚拟地址: 0x5ab6d3
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5ab6d3(void* arg1, int32_t arg2, int32_t arg3, void** arg4, void** arg5)
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    int32_t var_8 = ecx
    int32_t edi
    int32_t var_14 = edi
    void* edi_1 = arg1
    int32_t eax = *(edi_1 + 0x10)
    void* esi = *(edi_1 + 0xc)
    void* ebx = esi
    
    while (true)
        arg1 = esi
        
        while (true)
            if (arg2 s< 0)
                *arg4 = esi + 1
                *arg5 = ebx
                
                if (ebx u<= *(edi_1 + 0xc) && esi + 1 u<= ebx)
                    return (esi + 1) * 0x14 + eax
                
                _inconsistency()
                noreturn
            
            if (esi == 0xffffffff)
                _inconsistency()
                noreturn
            
            esi -= 1
            void* eax_3 = esi * 0x14 + eax
            
            if ((*(eax_3 + 4) s>= arg3 || arg3 s> *(eax_3 + 8)) && esi != 0xffffffff)
                continue
            
            arg2 -= 1
            ebx = arg1
            break
}
