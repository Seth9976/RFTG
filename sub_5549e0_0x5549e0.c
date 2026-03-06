// 函数名称: sub_5549e0
// 虚拟地址: 0x5549e0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5549e0(int32_t* arg1)
{
    // 第一条实际指令: arg1[2]
    arg1[2]
    int32_t edx
    int32_t result_2 = sub_4cce80(sub_554170(1, edx, arg1[1]))
    int32_t ecx_1 = arg1[2]
    int32_t result_1 = result_2
    int32_t eax_1 = arg1[1]
    int32_t var_14 = eax_1
    int32_t var_10 = ecx_1
    int32_t eax_2 = sub_5540b0(1, eax_1)
    int32_t var_c = eax_2
    int32_t var_8 = 1
    sub_554750(&result_1)
    int32_t eax_3 = *arg1
    
    if (eax_3 != 0)
        _aligned_free_base(eax_3)
    
    int32_t result = result_1
    arg1[3] = eax_2
    arg1[4] = 1
    *arg1 = result
    return result
}
