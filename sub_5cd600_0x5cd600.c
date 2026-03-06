// 函数名称: sub_5cd600
// 虚拟地址: 0x5cd600
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void* __convention("regparm")sub_5cd600(void* arg1, int32_t arg2, char* arg3, void* arg4, char* arg5)
{
    // 第一条实际指令: void* ebx = arg4
    void* ebx = arg4
    void* edi = arg1
    char* esi = arg3
    void* var_8 = nullptr
    
    if (ebx != 0)
        int32_t eax = *(ebx + 0x14)
        
        if (eax != 0 && eax u> sub_5cd1b0(arg5))
            int32_t ebx_1 = *(ebx + 0xc)
            char ebx_2 = (neg.d(ebx_1)).b
            void* eax_3 = sub_5cd1b0(arg5)
            void* i = eax - eax_3
            
            if (eax != eax_3)
                do
                    i -= 1
                    
                    if (edi == 0)
                        break
                    
                    var_8 += 1
                    *esi = (sbb.b(ebx_2, ebx_2, ebx_1 != 0) & 0x10) + 0x20
                    esi = &esi[1]
                    edi -= 1
                while (i != 0)
            
            ebx = arg4
    
    void* result = var_8 + sub_5cd270(esi, arg5, edi)
    
    if (ebx != 0)
        int32_t ebx_3 = *(ebx + 0x10)
        
        if (ebx_3 == 1)
            char* var_1c_4 = esi
            sub_5cd3f0()
            return result
        
        if (ebx_3 == 2)
            char* var_1c_5 = esi
            sub_5cd3e0()
    
    return result
}
