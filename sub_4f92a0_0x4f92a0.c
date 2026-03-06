// 函数名称: sub_4f92a0
// 虚拟地址: 0x4f92a0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t* __convention("regparm")sub_4f92a0(char arg1, int32_t arg2, float* arg3, int32_t* arg4 @ esi, int32_t arg5)
{
    // 第一条实际指令: float* var_38 = arg3
    float* var_38 = arg3
    void var_24
    int32_t* eax_1 = sub_4f8710(arg4, &var_24, arg5, arg2, arg3, arg1, 
        fconvert.s(fconvert.t(fconvert.s(fconvert.t(data_8c4d34)))), nullptr, nullptr, nullptr)
    int32_t ecx = eax_1[1]
    *arg4 = *eax_1
    int32_t edx_1 = eax_1[2]
    arg4[1] = ecx
    int32_t ecx_1 = eax_1[3]
    arg4[2] = edx_1
    int32_t edx_2 = eax_1[4]
    arg4[3] = ecx_1
    arg4[4] = edx_2
    return arg4
}
