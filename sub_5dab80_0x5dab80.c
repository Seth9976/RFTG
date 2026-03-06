// 函数名称: sub_5dab80
// 虚拟地址: 0x5dab80
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void*sub_5dab80(int32_t arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t eax = sub_5da660(arg1, arg2)
    int32_t eax = sub_5da660(arg1, arg2)
    void* result = sub_5da6a0(arg1, arg2)
    
    if (result != 0)
        int32_t i = 0
        
        if (*(result + 0xc) s> 0)
            do
                int32_t var_14_1 = *(*(result + 0x10) + (i << 2))
                sub_5d0af0()
                i += 1
            while (i s< *(result + 0xc))
        
        int32_t var_14_2 = *(result + 0x10)
        sub_5d0af0()
        void* result_1 = result
        sub_5d0af0()
        int32_t ecx_2 = data_bf7fcc
        int32_t eax_3 = data_bf7fc8 - 1
        data_bf7fc8 = eax_3
        result = *(ecx_2 + (eax_3 << 2))
        *(ecx_2 + (eax << 2)) = result
    
    return result
}
