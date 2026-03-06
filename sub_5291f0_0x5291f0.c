// 函数名称: sub_5291f0
// 虚拟地址: 0x5291f0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t* __convention("regparm")sub_5291f0(int32_t* arg1, int32_t* arg2)
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    int32_t var_c = ecx
    void* edx = *sub_521460(*arg1)
    int32_t* var_1c = arg2
    int32_t ecx_2 = arg1[1] * 3
    void* esi_1 = edx + (ecx_2 << 2)
    int32_t var_20 = 0x68
    sub_530b60(esi_1, edx, ecx_2, &data_8c00ec)
    int32_t* result = sub_531120(esi_1, 0x68, data_315f6e4)
    *result = *arg2
    result[1] = arg2[1]
    result[2] = arg2[2]
    result[3] = arg2[3]
    
    if (result != 0)
        return result
    
    sub_4c5870("memcpy(val, &value, sizeof(value))", &data_83f3d3, "UI2.cpp", 0xf0b, 
        "AssignPropertyRect")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_4c5a30()
    noreturn
}
