// 函数名称: sub_4c7470
// 虚拟地址: 0x4c7470
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void __convention("regparm")sub_4c7470(int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4)
{
    // 第一条实际指令: if (arg1 == 0)
    if (arg1 == 0)
        return 
    
    void* ecx_1 = data_27e7bb8
    uint32_t esi_1 = zx.d(arg1.w)
    
    if (esi_1 u>= *(ecx_1 + 4))
        return 
    
    void* esi_3 = esi_1 * 0x4c + *ecx_1
    
    if (*(esi_3 + 0x48) != arg1)
        return 
    
    if (*(esi_3 + 0x10) == 0xffffffff)
        *(esi_3 + 0x10) = (*(*data_27e7bb4 + 8))(zx.d(*(esi_3 + 2)), 0)
    
    arg1 = *(esi_3 + 0x10)
    
    if (arg1 != 0xffffffff && (*(*data_27e7bb4 + 0x10))(arg1, arg2, arg4, arg3) == 0xfffffffe)
        (*(*data_27e7bb4 + 0xc))(*(esi_3 + 0x10))
        *(esi_3 + 0x10) = (*(*data_27e7bb4 + 8))(zx.d(*(esi_3 + 2)), 0)
}
