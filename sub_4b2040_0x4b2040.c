// 函数名称: sub_4b2040
// 虚拟地址: 0x4b2040
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void*sub_4b2040()
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    void* __return_addr_3
    int32_t edx
    __return_addr_3, edx = __chkstk(0x1eec)
    void* j_1
    int32_t eax_1 = __security_cookie ^ &j_1
    int32_t ebx
    int32_t var_c = ebx
    void* __return_addr_1 = __return_addr_3
    void* j = nullptr
    int32_t ecx = 0
    __return_addr = __return_addr_1
    int32_t arg_4 = 0xfffffc19
    int32_t arg_8 = 0xffffffff
    
    if (0 s< *(__return_addr_1 + 0x460))
        j = __return_addr_1 + 0x465
        
        do
            edx = *(j + 7)
            
            if (*(edx + 0xe) == 1)
                if (*j != 3)
                    break
                
                arg_8 = sx.d(*(j - 1))
            
            edx = sx.d(*(__return_addr_1 + 0x460))
            ecx += 1
            j += 0x14
        while (ecx s< edx)
    
    char* i = nullptr
    char* i_1 = nullptr
    
    if (*(__return_addr_1 + 0x458) s> 0)
        void arg_16
        void* eax_2 = &arg_16 - __return_addr_1
        void arg_14
        int16_t* eax_3 = &arg_14 - __return_addr_1
        int16_t* ebx_2 = __return_addr_1 + 0xa8
        
        do
            *ebx_2 = 0
            
            if (i != arg_8)
                void* __return_addr_2 = __return_addr_1
                j, edx = sub_4b1e20(i, edx)
            else
                j_1 = 2
                
                do
                    int32_t ecx_1 = sub_5ab990(&arg_14, __return_addr_1, 0x1ec8)
                    char arg_1ec8 = j_1.b
                    char arg_2c = 1
                    void* var_18_1 = &arg_14
                    edx = sub_4b1e20(i_1, sub_4ae7d0(ecx_1, i, 0xd, &arg_14))
                    int32_t eax_5 = sx.d(*(eax_2 + ebx_2))
                    
                    if (eax_5 s> arg_4)
                        arg_4 = eax_5
                        eax_5.b = j_1.b
                        *(__return_addr + 0x1eb5) = eax_5.b
                        edx.w = *(eax_3 + ebx_2)
                        *ebx_2 = edx.w
                    
                    __return_addr_1 = __return_addr
                    i = i_1
                    j = j_1 + 1
                    j_1 = j
                while (j s<= 5)
                
                j.w = arg_4.w
                ebx_2[1] = j.w
            
            i = &i[1]
            ebx_2 = &ebx_2[0x5a]
            i_1 = i
        while (i s< sx.d(*(__return_addr_1 + 0x458)))
    
    sub_5a6aba(eax_1 ^ &j_1)
    return j
}
