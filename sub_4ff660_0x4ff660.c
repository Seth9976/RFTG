// 函数名称: sub_4ff660
// 虚拟地址: 0x4ff660
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void __convention("regparm")sub_4ff660(int32_t arg1, int32_t arg2, void* arg3)
{
    // 第一条实际指令: char* i = *(arg3 + 4)
    char* i = *(arg3 + 4)
    void* edi = arg3
    
    while (i != 0)
        int32_t j_2 = 4
        void* esi_1 = edi
        int32_t j
        
        do
            arg1 = arg1 u>> 8 ^ *(((zx.d(*esi_1) ^ zx.d(arg1.b)) << 2) + &data_8c0ca0)
            esi_1 += 1
            j = j_2
            j_2 -= 1
        while (j != 1)
        char* i_1 = i
        void* esi_2 = &i_1[1]
        uint32_t ebx_3
        
        do
            ebx_3.b = *i_1
            i_1 = &i_1[1]
        while (ebx_3.b != 0)
        void* j_3 = i_1 - esi_2
        
        if (i_1 != esi_2)
            void* j_1
            
            do
                arg1 = arg1 u>> 8 ^ *(((zx.d(*i) ^ zx.d(arg1.b)) << 2) + &data_8c0ca0)
                i = &i[1]
                j_1 = j_3
                j_3 -= 1
            while (j_1 != 1)
        
        i = *(edi + 0xc)
        edi += 8
}
