// 函数名称: sub_5cd1f0
// 虚拟地址: 0x5cd1f0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void*sub_5cd1f0(int32_t arg1, int16_t* arg2, int32_t arg3)
{
    // 第一条实际指令: void* result = sub_5cd1d0(arg2)
    void* result = sub_5cd1d0(arg2)
    
    if (arg3 != 0)
        void* result_1 = arg3 - 1
        
        if (result u< result_1)
            result_1 = result
        
        int16_t* esi_1 = result_1 * 2
        int16_t* var_14_1 = esi_1
        int16_t* var_18_1 = arg2
        int32_t var_1c_1 = arg1
        sub_5cd110()
        *(esi_1 + arg1) = 0
    
    return result
}
