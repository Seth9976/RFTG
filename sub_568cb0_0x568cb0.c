// 函数名称: sub_568cb0
// 虚拟地址: 0x568cb0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void* __convention("regparm")sub_568cb0(int32_t arg1, int32_t arg2, int32_t* arg3)
{
    // 第一条实际指令: int32_t* var_8 = arg3
    int32_t* var_8 = arg3
    void* result = arg1 - arg3
    
    if ((result & 0xfffffffc) s> 4)
        void* result_1
        
        do
            int32_t* edx = *(arg3 + result - 4)
            int32_t* ecx_2 = *arg3
            result_1 = result - 4
            *(arg3 + result - 4) = ecx_2
            var_8 = edx
            int32_t ebx
            int32_t var_14_1 = ebx
            int32_t* var_18_1 = &var_8
            sub_568db0(0, arg3, edx, ecx_2, result_1 s>> 2)
            result = result_1
        while ((result_1 & 0xfffffffc) s> 4)
    
    return result
}
