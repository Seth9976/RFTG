// 函数名称: sub_464c80
// 虚拟地址: 0x464c80
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void* __convention("regparm")sub_464c80(int32_t arg1, int32_t arg2, int32_t arg3, int32_t* arg4 @ esi)
{
    // 第一条实际指令: int32_t var_8 = arg3
    int32_t var_8 = arg3
    void* result = arg1 - arg4
    
    if ((result & 0xfffffffc) s> 4)
        void* result_1
        
        do
            int32_t ecx_2 = *arg4
            var_8 = *(arg4 + result - 4)
            result_1 = result - 4
            *(arg4 + result - 4) = ecx_2
            sub_4653f0(0, result_1 s>> 2, arg4, &var_8)
            result = result_1
        while ((result_1 & 0xfffffffc) s> 4)
    
    return result
}
