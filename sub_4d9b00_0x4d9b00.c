// 函数名称: sub_4d9b00
// 虚拟地址: 0x4d9b00
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

uint32_tsub_4d9b00(int32_t* arg1 @ esi, int32_t* arg2 @ edi, float* arg3, float* arg4)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    void* edx = data_27e7fe0
    float var_28 = fconvert.s(fconvert.t(*arg3) + fconvert.t(*(edx + 0x20)))
    float var_24 = fconvert.s(fconvert.t(arg3[1]) + fconvert.t(*(edx + 0x24)))
    float var_20 = fconvert.s(fconvert.t(arg3[2]) + fconvert.t(*(edx + 0x20)))
    float var_1c = fconvert.s(fconvert.t(arg3[3]) + fconvert.t(*(edx + 0x24)))
    float var_18 = fconvert.s(fconvert.t(arg3[4]) + fconvert.t(*(edx + 0x20)))
    float var_14 = fconvert.s(fconvert.t(arg3[5]) + fconvert.t(*(edx + 0x24)))
    float var_10 = fconvert.s(fconvert.t(arg3[6]) + fconvert.t(*(edx + 0x20)))
    float var_c = fconvert.s(fconvert.t(arg3[7]) + fconvert.t(*(edx + 0x24)))
    int32_t* ecx
    uint32_t result = sub_4d8cf0(arg4, &var_28, ecx, arg4, arg1, arg2)
    sub_5a6aba(eax_1 ^ &__saved_ebp)
    return result
}
