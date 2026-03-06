// 函数名称: sub_5ad514
// 虚拟地址: 0x5ad514
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void __convention("regparm")sub_5ad514(uint32_t arg1, int32_t arg2, int32_t* arg3, int32_t* arg4 @ esi)
{
    // 第一条实际指令: if ((arg3[3].b & 0x40) == 0 || arg3[2] != 0)
    if ((arg3[3].b & 0x40) == 0 || arg3[2] != 0)
        int32_t temp0_1 = arg3[1]
        arg3[1] -= 1
        
        if (temp0_1 - 1 s< 0)
            int32_t* var_4_1 = arg3
            arg1 = sub_5ad3b0(sx.d(arg1.b))
        else
            **arg3 = arg1.b
            *arg3 += 1
            arg1 = zx.d(arg1.b)
        
        if (arg1 == 0xffffffff)
            *arg4 |= arg1
            return 
    
    *arg4 += 1
}
