// 函数名称: sub_4070b0
// 虚拟地址: 0x4070b0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int80_tsub_4070b0(void* arg1 @ edi)
{
    // 第一条实际指令: int32_t* ecx_2 = data_307c174
    int32_t* ecx_2 = data_307c174
    data_27c05e4 = arg1
    int32_t eax
    int80_t st0
    st0, eax = sub_4f6f00(ecx_2)
    int32_t* ecx = data_307c178
    *(arg1 + 8) = eax
    int32_t eax_1
    int32_t ecx_1
    int80_t st0_1
    st0_1, eax_1, ecx_1 = sub_4f6f00(ecx)
    int32_t var_8 = ecx_1
    *(arg1 + 0xc) = eax_1
    int80_t result = sub_4fa8a0(eax_1, 0, fconvert.s(fconvert.t(1000f)))
    *(sub_4fc3d0(&data_be1cb8, *(arg1 + 8)) + 0x2c) = sub_406f10
    *(sub_4fc3d0(&data_be1cb8, *(arg1 + 0xc)) + 0x2c) = sub_406f10
    return result
}
