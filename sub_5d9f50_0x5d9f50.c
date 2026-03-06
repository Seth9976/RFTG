// 函数名称: sub_5d9f50
// 虚拟地址: 0x5d9f50
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5d9f50(int32_t* arg1, int32_t* arg2)
{
    // 第一条实际指令: if (arg1 == 0 || *arg1 != 0xbf7fc4)
    if (arg1 == 0 || *arg1 != 0xbf7fc4)
        sub_5cce60("Invalid renderer")
        return 0xffffffff
    
    if (arg2 == 0)
        arg1[0x35] = 0
        arg1[0x36] = 0
        
        if (sub_5d9920(arg1, &arg1[0x37], &arg1[0x38]) s< 0)
            return 0xffffffff
    else
        int32_t var_14
        var_14.q = fconvert.d(float.t(*arg2) * fconvert.t(arg1[0x45]))
        arg1[0x35] = sub_685f40(sub_5deca0(var_14))
        var_14.q = fconvert.d(float.t(arg2[1]) * fconvert.t(arg1[0x46]))
        arg1[0x36] = sub_685f40(sub_5deca0(var_14))
        var_14.q = fconvert.d(float.t(arg2[2]) * fconvert.t(arg1[0x45]))
        arg1[0x37] = sub_685f40(sub_5dec60(var_14))
        var_14.q = fconvert.d(float.t(arg2[3]) * fconvert.t(arg1[0x46]))
        arg1[0x38] = sub_685f40(sub_5dec60(var_14))
    
    return arg1[0xc](arg1)
}
