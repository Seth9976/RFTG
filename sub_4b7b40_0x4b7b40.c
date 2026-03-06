// 函数名称: sub_4b7b40
// 虚拟地址: 0x4b7b40
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void* __convention("regparm")sub_4b7b40(void* arg1, int32_t* arg2)
{
    // 第一条实际指令: sub_4b7950()
    sub_4b7950()
    int128_t* eax = sub_4b7ab0(*(arg1 + 0x1d4))
    int32_t eax_2 = sub_404890(arg1, arg2[1])
    int32_t ecx = eax[0x1f].d
    arg2[0x6f] = eax_2
    arg2[0x6d] = ecx
    void* eax_4 = eax_2 * 0x70 + eax
    *(eax_4 + 0x2c) = 0
    *(eax_4 + 0x28) = arg2[1]
    *(eax_4 + 0x30) = 0
    *(eax_4 + 0x34) = 0
    *(eax_4 + 0x38) = 0
    *(eax_4 + 0x3c) = 0x3f800000
    *arg2
    sub_4d10e0(*(eax + 0x1e8))
    int32_t ebx_3 = arg2[0x6d]
    int32_t esi_2 = arg2[1]
    int32_t var_1c = ebx_3
    int32_t var_20 = esi_2
    sub_4c57f0("VoipBounceClientChangeGame %x %x")
    void* result = sub_4d2b00(esi_2)
    
    if (result != 0)
        *(result + 0x1c) = ebx_3
    
    return result
}
