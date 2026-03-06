// 函数名称: sub_464e20
// 虚拟地址: 0x464e20
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void* __convention("regparm")sub_464e20(int32_t* arg1, int32_t arg2, void* arg3)
{
    // 第一条实际指令: void* result = arg3 - arg1
    void* result = arg3 - arg1
    
    if ((result & 0xfffffff8) s> 8)
        int32_t* edi_1 = arg3 - 8
        
        do
            int32_t edx_2 = edi_1[1]
            int32_t var_c = *edi_1
            int32_t* ecx_1 = *arg1
            *edi_1 = ecx_1
            int32_t ebx
            int32_t var_18_1 = ebx
            int32_t* var_1c_1 = &var_c
            int32_t var_8_1 = edx_2
            int32_t edx_3 = arg1[1]
            edi_1[1] = edx_3
            sub_465470(0, arg1, edx_3, ecx_1, (result - 8) s>> 3)
            edi_1 -= 8
            result = edi_1 - arg1 + 8
        while ((result & 0xfffffff8) s> 8)
    
    return result
}
