// 函数名称: sub_56ef50
// 虚拟地址: 0x56ef50
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void*sub_56ef50(float arg1, float arg2)
{
    // 第一条实际指令: int128_t* eax_1 = sub_4e7ab0(data_3079270)
    int128_t* eax_1 = sub_4e7ab0(data_3079270)
    int32_t* eax_2 = *eax_1
    *(eax_1 + 0x2c) = fconvert.s(fconvert.t(arg1))
    *(eax_1 + 0x3c) = fconvert.s(fconvert.t(arg2))
    int32_t eax_3 = sub_4e88a0(eax_2)
    int32_t ecx = eax_1[9].d
    *(eax_1 + 0x78) = eax_3
    data_3079274 = ecx
    int32_t* eax_4
    int32_t ecx_1
    eax_4, ecx_1 = sub_4e7210(*eax_1)
    int32_t var_18_1 = ecx_1
    
    if (eax_4[1] s> 0)
        **eax_4
    
    sub_4e8720(eax_1, 0, fconvert.s(float.t(1)))
    void* result = sub_56ea90(eax_1, 1)
    data_3079278 = 0
    return result
}
