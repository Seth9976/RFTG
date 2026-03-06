// 函数名称: sub_6108d0
// 虚拟地址: 0x6108d0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_6108d0(int32_t* arg1, int32_t* arg2, int32_t* arg3, uint32_t* arg4)
{
    // 第一条实际指令: int32_t edx = *arg1
    int32_t edx = *arg1
    
    if (edx != 0x32315659 && edx != 0x56555949)
    label_610919:
        
        if (arg2 != 0)
            *arg3 = zx.d(arg1[9].w) * arg2[1] + (*arg2 << 1) + arg1[0xb]
            *arg4 = zx.d(arg1[9].w)
            return 0
    else if (arg2 != 0)
        if (*arg2 == 0 && arg2[1] == 0 && arg2[2] == arg1[2] && arg2[3] == arg1[3])
            goto label_610919
        
        sub_5cce60("YV12 and IYUV textures only support full surface locks")
        return 0xffffffff
    
    *arg3 = arg1[0xb]
    *arg4 = zx.d(arg1[9].w)
    return 0
}
