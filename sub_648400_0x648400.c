// 函数名称: sub_648400
// 虚拟地址: 0x648400
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_648400(void* arg1, double arg2, int32_t arg3, int32_t arg4)
{
    // 第一条实际指令: int32_t* esi = *(arg1 + 0x1c)
    int32_t* esi = *(arg1 + 0x1c)
    int32_t eax = sub_685f40(fconvert.t(arg2))
    int32_t ecx_1 = *(arg4 + (eax << 2))
    int32_t result = *(arg3 + (eax << 2))
    *esi = result
    esi[1] = ecx_1
    return result
}
