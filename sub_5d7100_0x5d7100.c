// 函数名称: sub_5d7100
// 虚拟地址: 0x5d7100
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5d7100(int32_t arg1) __pure
{
    // 第一条实际指令: switch (arg1)
    switch (arg1)
        case 0x11100100
            return "SDL_PIXELFORMAT_INDEX1LSB"
        case 0x11200100
            return "SDL_PIXELFORMAT_INDEX1MSB"
        case 0x12100400
            return "SDL_PIXELFORMAT_INDEX4LSB"
        case 0x12200400
            return "SDL_PIXELFORMAT_INDEX4MSB"
        case 0x13000801
            return "SDL_PIXELFORMAT_INDEX8"
        case 0x14110801
            return "SDL_PIXELFORMAT_RGB332"
        case 0x15120c02
            return "SDL_PIXELFORMAT_RGB444"
        case 0x15130f02
            return "SDL_PIXELFORMAT_RGB555"
        case 0x15151002
            return "SDL_PIXELFORMAT_RGB565"
        case 0x15321002
            return "SDL_PIXELFORMAT_ARGB4444"
        case 0x15331002
            return "SDL_PIXELFORMAT_ARGB1555"
        case 0x15421002
            return "SDL_PIXELFORMAT_RGBA4444"
        case 0x15441002
            return "SDL_PIXELFORMAT_RGBA5551"
        case 0x15530f02
            return "SDL_PIXELFORMAT_BGR555"
        case 0x15551002
            return "SDL_PIXELFORMAT_BGR565"
        case 0x15721002
            return "SDL_PIXELFORMAT_ABGR4444"
        case 0x15731002
            return "SDL_PIXELFORMAT_ABGR1555"
        case 0x15821002
            return "SDL_PIXELFORMAT_BGRA4444"
        case 0x15841002
            return "SDL_PIXELFORMAT_BGRA5551"
        case 0x16161804
            return "SDL_PIXELFORMAT_RGB888"
        case 0x16261804
            return "SDL_PIXELFORMAT_RGBX8888"
        case 0x16362004
            return "SDL_PIXELFORMAT_ARGB8888"
        case 0x16372004
            return "SDL_PIXELFORMAT_ARGB2101010"
        case 0x16462004
            return "SDL_PIXELFORMAT_RGBA8888"
        case 0x16561804
            return "SDL_PIXELFORMAT_BGR888"
        case 0x16661804
            return "SDL_PIXELFORMAT_BGRX8888"
        case 0x16762004
            return "SDL_PIXELFORMAT_ABGR8888"
        case 0x16862004
            return "SDL_PIXELFORMAT_BGRA8888"
        case 0x17101803
            return "SDL_PIXELFORMAT_RGB24"
        case 0x17401803
            return "SDL_PIXELFORMAT_BGR24"
        case 0x32315659
            return "SDL_PIXELFORMAT_YV12"
        case 0x32595559
            return "SDL_PIXELFORMAT_YUY2"
        case 0x55595659
            return "SDL_PIXELFORMAT_YVYU"
        case 0x56555949
            return "SDL_PIXELFORMAT_IYUV"
        case 0x59565955
            return "SDL_PIXELFORMAT_UYVY"
    
    return "SDL_PIXELFORMAT_UNKNOWN"
}
