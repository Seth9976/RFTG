// 函数名称: sub_60d270
// 虚拟地址: 0x60d270
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_60d270(int32_t* arg1, int32_t* arg2)
{
    // 第一条实际指令: int32_t* eax = arg2[0x11]
    int32_t* eax = arg2[0x11]
    
    if (eax[2] == 0)
        int32_t* eax_3 = *eax
        return (*(*eax_3 + 0x50))(eax_3, 0)
    
    int32_t edx = arg2[1]
    uint32_t esi_3
    
    if (edx == 0 || (edx & 0xf0000000) == 0x10000000)
        esi_3 = zx.d(edx.b)
    else if (edx == 0x32595559 || edx == 0x59565955 || edx == 0x55595659)
        esi_3 = 2
    else
        esi_3 = 1
    
    int32_t edx_1 = eax[6]
    int32_t var_14 = edx_1
    return sub_60cf00(arg1, arg2, &eax[7], eax[8] * edx_1 + eax[7] * esi_3 + eax[5])
}
