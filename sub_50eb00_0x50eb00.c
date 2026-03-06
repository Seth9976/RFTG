// 函数名称: sub_50eb00
// 虚拟地址: 0x50eb00
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __fastcallsub_50eb00(int32_t arg1, int32_t arg2 @ edi)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    int32_t edx
    int32_t* eax_2 = sub_510b30(arg1, edx)
    int32_t eax_3
    int32_t edx_1
    eax_3, edx_1 = sub_50c140(*eax_2)
    int32_t* esi_3 = arg1 * 0xb8 + *eax_3
    int128_t* eax_5 = sub_50c830(arg1, edx_1, eax_2)
    int32_t edx_2 = esi_3[0x21]
    int32_t var_14 = esi_3[0x1f]
    int32_t var_c = edx_2
    int32_t eax_8
    int32_t edx_3
    edx_3:eax_8 = sx.q(arg2)
    int32_t ecx_1 = esi_3[0x20]
    int32_t eax_10
    int32_t edx_5
    edx_5:eax_10 = sx.q(divs.dp.d(edx_3:eax_8, var_14))
    int32_t temp0_1 = divs.dp.d(sx.q(arg2), ecx_1 * var_14)
    var_14 = mods.dp.d(edx_3:eax_8, var_14)
    int32_t var_10 = mods.dp.d(edx_5:eax_10, ecx_1)
    int32_t var_c_1 = temp0_1
    sub_50c900(&var_14, eax_5, esi_3, &var_14)
    int32_t result = *(eax_5 + (arg2 << 2) + 0x7c)
    sub_5a6aba(eax_1 ^ &__saved_ebp)
    return result
}
